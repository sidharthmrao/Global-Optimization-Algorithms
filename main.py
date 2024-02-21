import time

import pygame

from local_sim.path import LocalPlanner
from global_sim.algorithm import rrt_sid, rrt_star
from type_hints.types import Grid
from utils.occupancy_grid import waypoints_gen
from utils.render import image_to_grid, render_local_path_on_image
import config

start_time = time.time()

grid: Grid = image_to_grid(config.map_path, reverse_colors=config.map_bw_reverse)

screen = None
if config.debug:
    pygame.init()
    screen = pygame.display.set_mode((len(grid[0]), len(grid)))

algo_options = {
    "rrt_sid": rrt_sid,
    "rrt_star": rrt_star
}

global_path = algo_options[config.algo](
    grid,
    config.iters,
    config.start_node,
    config.end_node,
    config.initial_generate_dist,
    screen,
    config.out_path
)

for i in range(len(global_path)):
    global_path[i] = (global_path[i][0], global_path[i][1], 0, 0)

current_position = global_path[0]
target_waypoint = global_path[1]

render_local_path_on_image([], config.out_path, 'test.png')

total_dist = (target_waypoint[0] - current_position[0]) ** 2 + (target_waypoint[1] -
                                                                current_position[1]) ** 2

while (current_position[0], current_position[1]) != (global_path[-1][0], global_path[-1][1]):
    local_planner = LocalPlanner(.05, .25)

    next_waypoint = None
    if global_path.index(target_waypoint) + 1 < len(global_path):
        next_waypoint = global_path[global_path.index(target_waypoint) + 1]

    solution, state, u = local_planner.find_path(current_position, target_waypoint,
                                                 next_waypoint, total_dist, [])
    path = local_planner.get_path_coords(solution, state)
    current_position = path[-1]

    if (current_position[0] - target_waypoint[0]) ** 2 + (
            current_position[1] - target_waypoint[1]) ** 2 < 100:
        target_waypoint = global_path[global_path.index(target_waypoint) + 1]

        total_dist = ((target_waypoint[0] - current_position[0]) ** 2 + (target_waypoint[1] -
                                                                         current_position[1])) ** 2

    render_local_path_on_image(path, 'test.png', 'test.png')
    if config.debug:
        imp = pygame.image.load('test.png').convert()
        screen.blit(imp, (0, 0))
        pygame.display.flip()

# for i in range(len(global_path)):
#     global_path[i] = (global_path[i][0], global_path[i][1], 0, 0)
#
# global_path = waypoints_gen(global_path, 40)
#
# local_planner = LocalPlanner(.01, .25)
# local_path = []
#
# render_local_path_on_image([], config.out_path, 'test.png')
#
# for i in range(len(global_path) - 1):
#     local_planner = LocalPlanner(.05, .25)
#     solution, state, u = local_planner.find_path(global_path[i], global_path[i + 1], [])
#     path = local_planner.get_path_coords(solution, state)
#     global_path[i+1] = path[-1]
#     local_path.extend(path)
#
#     render_local_path_on_image(local_path, config.out_path, 'test.png')
#     if config.debug:
#         imp = pygame.image.load('test.png').convert()
#         screen.blit(imp, (0, 0))
#         pygame.display.flip()
#
# print("Finished in:")
# print(f"{time.time() - start_time} seconds.")
#
# if config.debug:
#     x = input()

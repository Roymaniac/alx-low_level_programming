#!/usr/bin/python3
""""
Island Perimeter
"""


def island_perimeter(grid):
    """Search perimeter"""
    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if (grid[i][j]):
                # comment:
                perimeter += 4
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2
            # end if
    return perimeter

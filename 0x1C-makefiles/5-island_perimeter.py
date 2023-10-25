#!/usr/bin/python3
"""
a module containing the island_perimeter function
"""


def island_perimeter(grid):
    """
    calculates the perimeter of a grid

    Args:
        grid (list): a list of lists
    """

    perimeter = 0

    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                if (i == 0
                        or (i > 0 and grid[i - 1][j] == 0)):
                    perimeter += 1
                if (i == len(grid) - 1
                        or (i < len(grid) - 1 and grid[i + 1][j] == 0)):
                    perimeter += 1
                if (j == 0
                        or (j > 0 and grid[i][j - 1] == 0)):
                    perimeter += 1
                if (j == len(grid) - 1
                        or (j < len(grid) - 1 and grid[i][j + 1] == 0)):
                    perimeter += 1

    return perimeter

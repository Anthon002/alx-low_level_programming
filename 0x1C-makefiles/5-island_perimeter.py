#!/usr/bin/python3
"""Defines an island perimeter measuring function."""


def island_perimeter(grid):
    """Return the perimiter of an island.

    The grid represents water by 0 and land by 1.

    Args:
        grid (list): A list of list of integers representing an island.
    Returns:
        The perimeter of the island defined in grid.
    """
    per = 0

    for i, row in enumerate(grid):
        for j, cel in enumerate(row):
            if cel == 1:
                per += 4
                if i > 0 and grid[i - 1][j] == 1:
                    per -= 2
                if j > 0 and grid[i][j - 1] == 1:
                    per -= 2
    return per

#!/usr/bin/python3
"""module to calculate the island's primeter"""


def island_perimeter(grid):

    """Returns the perimeter of the island

    Args:
        grid (list of list of int): The grid map.

    Returns:
        int: The perimeter of the island.
    """
    colms = len(grid[0])
    rws = len(grid)

    par = 0
    for i in range(rws):
        for j in range(colms):
            if grid[i][j] == 1:
                par = par + 4
                if (j > 0 and grid[i][j - 1] == 1):
                    par = par - 2
                if (i > 0 and grid[i - 1][j] == 1):
                    par = par - 2
    return (par)

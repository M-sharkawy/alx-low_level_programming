#!/usr/bin/python3
"""module to calculate the island's primeter"""

def island_perimeter(grid):
    """Returns the perimeter of the island described in grid.

    Args:
        grid (list of list of int): The grid map.

    Returns:
        int: The perimeter of the island.
    """
    perm = 0
    rws = len(grid)
    colms = len(grid[0])
    for i in range(rws):
        for j in range(colms):
            if grid[i][j] == 1:
                if i == 0 or grid[i - 1][j] == 0:
                    perm += 1
                if j == 0 or grid[i][j-1] == 0:
                    perm += 1
                if j == colms-1 or grid[i][j+1] == 0:
                    perimeter += 1
    return perm

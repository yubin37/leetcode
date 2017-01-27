int islandPerimeter(int** grid, int gridRowSize, int gridColSize)
{
	int perimeter = 0;
	for (int i = 0; i < gridRowSize; i++) {
		for (int j = 0; j < gridColSize; j++) {
			if (grid[i][j] == 1) {
				// left
				if (j == 0)
					perimeter++;
				else if (grid[i][j - 1] == 0)
					perimeter++;

				// right
				if (j == gridColSize - 1)
					perimeter++;
				else if (grid[i][j + 1] == 0)
					perimeter++;

				// above
				if (i == 0)
					perimeter++;
				else if (grid[i - 1][j] == 0)
					perimeter++;

				// below
				if (i == gridRowSize - 1)
					perimeter++;
				else if (grid[i + 1][j] == 0)
					perimeter++;
			}
		}
	}
	return perimeter;
}

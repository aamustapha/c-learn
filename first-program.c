#include <stdio.h>
#include <stdbool.h>

int checked[4*5][2];
int checkIndex = 0;

int grid[4][5] = {
    {1, 1, 0, 0, 0},
    {1, 1, 0, 0, 0},
    {0, 0, 1, 0, 0},
    {0, 0, 0, 1, 1}
    };

bool isExtension(int x, int y) {
    return grid[x][y] == 1;
}

bool isChecked(int x, int y) {
    for(int i = 0; i < 20; i++) {
        if (checked[i][0] == x && checked[i][1] == y) {
            return true;
        }
    }
    return false;
}

void addChecked(int x, int y) {
    checked[checkIndex++] = {x, y}
}

void findExtension(int x, int y) {

}
    def find_extension(self, point: tuple):
        """
        Check if adjacent office is part of the same office
        """
        x, y = point
        self.used_spots.append((x, y))

        if y < self.max_y and self.is_extension((x, y + 1)):
            self.find_extension((x, y + 1))
        if x < self.max_x and self.is_extension((x + 1, y)):
            self.find_extension((x + 1, y))


int main() {
    printf("Hello, World!");
    return 0;
}



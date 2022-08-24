# Question 2: Die Tipping

class Die:
    def __init__(self):
        self.row = 5
        self.col = 5

        self.top = 1
        self.bottom = 6
        self.left = 3
        self.right = 4
        self.front = 2
        self.back = 5
        self.heading = "f"

    def rotate_forward(self):
        if self.row > 0:
            self.row -= 1
        else: 
            self.row = 10

        temp_front = self.front
        self.front = self.top
        self.top = self.back
        self.back = self.bottom
        self.bottom = temp_front
        self.heading = "f"

    def rotate_back(self):
        self.row = (self.row + 1) % 11

        temp_back = self.back
        self.back = self.top
        self.top = self.front
        self.front = self.bottom
        self.bottom = temp_back
        self.heading = "b"

    def rotate_left(self):
        if self.col > 0:
            self.col -= 1
        else: 
            self.col = 10

        temp_left = self.left
        self.left = self.top
        self.top = self.right
        self.right = self.bottom
        self.bottom = temp_left
        self.heading = "l"


    def rotate_right(self):
        self.col = (self.col + 1) % 11

        temp_right = self.right
        self.right = self.top
        self.top = self.left
        self.left = self.bottom
        self.bottom = temp_right
        self.heading = "r"



def print_grid(grid):
    for i in range(11):
        for j in range(11):
            print(grid[i][j], end=' ')
    
        print()



def solve():
    grid = [[1] * 11 for x in range(11)]
    die = Die()

    for i in range(3):
        row = list(map(int, input().split()))
        for j in range(3):
            grid[4 + i][4 + j] = row[j]

    while True:
        n = int(input())

        if n == 0:
            break

        elif n >= 1:
            for i in range(n):
                sum = die.top + grid[die.row][die.col]

                if sum > 6: 
                    sum -= 6

                grid[die.row][die.col] = sum
                
                if sum == 1 or sum == 6:
                    if die.heading == "f":
                        die.rotate_forward()
                    elif die.heading == "b":
                        die.rotate_back()
                    elif die.heading == "l":
                        die.rotate_left()
                    elif die.heading == "r":
                        die.rotate_right()
                elif sum == 2:
                    if die.heading == "f":
                        die.rotate_right()
                    elif die.heading == "b":
                        die.rotate_left()
                    elif die.heading == "l":
                        die.rotate_forward()
                    elif die.heading == "r":
                        die.rotate_back()
                elif sum == 3 or sum == 4:
                    if die.heading == "f":
                        die.rotate_back()
                    elif die.heading == "b":
                        die.rotate_forward()
                    elif die.heading == "l":
                        die.rotate_right()
                    elif die.heading == "r":
                        die.rotate_left()
                elif sum == 5:
                    if die.heading == "f":
                        die.rotate_left()
                    elif die.heading == "b":
                        die.rotate_right()
                    elif die.heading == "l":
                        die.rotate_back()
                    elif die.heading == "r":
                        die.rotate_forward()

                
            for i in range(-1, 2):

                for j in range(-1, 2):
                    if die.row + i < 0 or die.row + i > 10:
                        print("x", end=' ')
                    elif die.col + j < 0 or die.col + j > 10:
                        print("x", end=' ')
                    else:
                        print(grid[die.row + i][die.col + j], end=' ')
                
                print()
                




solve()
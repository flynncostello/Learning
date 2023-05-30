import time

# Start the timer
start_time = time.time()



def find_start(maze):
    # Finding the start position
    row = 0
    while row < len(maze):
        column = 0
        while column < len(maze[row]):
            cur_cell = maze[row][column]
            if cur_cell == "S":
                return row, column
            column += 1
        row += 1


def is_valid_position(maze, row, col):
    return 0 <= row < len(maze) and 0 <= col < len(maze[0]) and maze[row][col] != "#"


def convert_moves(moves):
    moves_list = ""
    converter_dict = {
        (-1, 0): "up",
        (1, 0): "down",
        (0, 1): "right",
        (0, -1): "left",
    }
    for move in moves:
        string_version = converter_dict[move]
        moves_list += f"{string_version}, "
    final_string = moves_list[:-2]
    return final_string



def find_shortest_path_dfs(maze):

    def dfs(row, col, moves, move_count):
        print(row, col)
        cur_cel = maze[row][col]
        if cur_cel == "F":
            return moves, move_count
        
        maze[row][col] = "#"

        possible_movements = ((-1, 0), (1, 0), (0, 1), (0, -1)) # UP, DOWN, RIGHT, LEFT
        for move in possible_movements:
            new_row = row + move[0]
            new_col = col + move[1] 
            if is_valid_position(maze, new_row, new_col): # New location is valid
                search = dfs(new_row, new_col, moves + [move], move_count+1)
                if search is not None: # I.e., we have reached the finish
                    return search
        return None # End not found
    

    # Finding start location
    start_row, start_column = find_start(maze)


    # Running dfs starting with 'S' cell
    try:
        moves, move_count = dfs(start_row, start_column, [], 0)
        moves_string = convert_moves(moves)

        print(f"Moves: {moves_string}. Taking a total of {move_count} moves.")

    except TypeError:
        print("No Path Found")
    
    




# Example usage:
maze1 = [
    ['#', '#', '#', '#', '#'],
    ['#', 'S', '#', '#', '#'],
    ['#', '.', '.', '.', '#'],
    ['#', '.', '#', '.', '#'],
    ['#', '.', '#', 'F', '#'],
    ['#', '#', '#', '#', '#']
]

maze2 = [
    ['#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#'],
    ['#', 'S', '.', '.', '.', '.', '#', '.', '.', '.', '.', '.', '.', '#', '#', '#', '#', '#', '#', '#'],
    ['#', '#', '#', '.', '#', '#', '#', '#', '#', '#', '.', '#', '.', '.', '.', 'F', '#', '#', '#', '#'],
    ['#', '.', '#', '.', '.', '.', '#', '#', '#', '#', '.', '.', '#', '#', '#', '#', '#', '#', '#', '#'],
    ['#', '.', '#', '.', '#', '#', '#', '.', '.', '.', '#', '.', '#', '.', '#', '#', '#', '#', '#', '#'],
    ['#', '.', '.', '.', '#', '#', '#', '.', '#', '.', '.', '.', '#', '.', '.', '#', '#', '#', '#', '#'],
    ['#', '#', '#', '.', '#', '#', '#', '.', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#'],
    ['#', '#', '#', '.', '.', '.', '.', '.', '#', '#', '#', '#', '.', '.', '#', '#', '#', '#', '#', '#'],
    ['#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#'],
]



find_shortest_path_dfs(maze2)




# Code block to measure execution time
# Place your code here

# End the timer
end_time = time.time()

# Calculate the elapsed time
elapsed_time = end_time - start_time

# Print the execution time
print("Execution time: {:.6f} seconds".format(elapsed_time))
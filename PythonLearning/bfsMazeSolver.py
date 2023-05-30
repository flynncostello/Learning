
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
    return 0 <= row < len(maze) and 0 <= col < len(maze[0]) and maze[row][col] != "#" and maze[row][col] != "S"


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


def find_shortest_path_bfs(maze):
    start_row, start_column = find_start(maze)
    queue = [(start_row, start_column, [])]  # (row, col, moves)
    visited = [(start_row, start_column)]

    while queue:
        row, col, moves = queue.pop(0)
        cur_cell_icon = maze[row][col]

        if cur_cell_icon == "F":
            moves_string = convert_moves(moves)
            return f"Maze can be completed in {len(moves)} moves. Moves include: {moves_string}"
        

        possible_movements = ((-1, 0), (1, 0), (0, 1), (0, -1))
        for move in possible_movements:
            new_row = row + move[0]
            new_col = col + move[1]

            if is_valid_position(maze, new_row, new_col) and (new_row, new_col) not in visited:
                visited.append((new_row, new_col))
                new_moves = moves + [(move[0], move[1])]
                queue.append((new_row, new_col, new_moves))

    return [None, None]



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



print(find_shortest_path_bfs(maze2))

import sys

def uci():
    print("id name KhanhChessEngine")
    print("id author Do Trong Khanh")
    print("uciok", flush=True)

def isready():
    print("readyok", flush=True)

def position(command):
    print(f"Position received: {command}", flush=True)

def go():
    print("bestmove e2e4", flush=True)

def main():
    while True:
        try:
            command = input().strip()
            if command == "uci":
                uci()
            elif command == "isready":
                isready()
            elif command.startswith("position"):
                position(command)
            elif command == "go":
                go()
            elif command == "quit":
                break
        except EOFError:
            break

if __name__ == "__main__":
    main()

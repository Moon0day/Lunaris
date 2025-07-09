import subprocess

def compile():
    command = ['g++', 'src/main.cpp', '-o', 'main']
    try:
        result = subprocess.run(command, check=True, capture_output=True, text=True)
        print("✅ Compilation successful.")
    except subprocess.CalledProcessError as e:
        print("❌ Compilation failed.")
        print(e.stderr)

if __name__ == "__main__":
    compile()

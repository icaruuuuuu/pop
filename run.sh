if [ $1 == "-c" ]; then
    g++ main.cpp -O2 --std=c++17 -Wconversion -Wshadow -Wfloat-equal && ./a.out < in > out && cat out
elif [ $1 == "-p" ]; then
    python3 main.py < in > out && cat out
elif [ $1 == "-e" ]; then
    ./a.out < in > out && cat out
else
    echo "run.sh [-c|-p|-e]"
fi

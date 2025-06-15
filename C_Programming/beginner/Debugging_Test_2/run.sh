#!/bin/bash
# Find the C file with the largest numeric value in its name, compile it, and run the output program

# Find the C file with the largest numeric value in its name
latest_file=$(ls *.c | sed -E 's/[^0-9]*([0-9]+)[^0-9]*/\1/' | sort -n | tail -n 1)
# Find the actual file name by matching it
latest_c_file=$(ls *.c | grep "$latest_file")

# Compile the selected C file
gcc -o output "$latest_c_file"

# Run the compiled output
./output

# Cat latest file
echo " "
echo " "
echo "------------------------------- "
echo " "
cat "$latest_c_file"

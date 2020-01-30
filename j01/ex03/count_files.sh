find . \( -type f -or -type d \) | wc -l | tr -d "\t " | cat -e

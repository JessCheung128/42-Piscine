find . -type f -name "*.sh" | sed 's/\.sh//' | sed 's/\.\///g' | rev | cut -d'/' -f 1 | rev

#!/bin/bash

# Diretório raiz (substitua pelo seu diretório desejado)
root_dir="/nfs/homes/aassis-p/Documents/Libft"

# Texto a ser alterado
old_text="aassis-p@student.42.rio"
new_text="aassis-p@student.42.rio"

# Encontrar e substituir o texto em arquivos
find "$root_dir" -type f -exec grep -Il "$old_text" {} \; | while read -r file; do
    sed -i "s|$old_text|$new_text|g" "$file"
    echo "Modificado: $file"
done

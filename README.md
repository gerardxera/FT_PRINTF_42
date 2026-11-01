Este proyecto ha sido creado como parte del currículo de 42 por gjuan-pa.

# ft_printf

Una implementación propia de la función `printf` en C, compilada como librería estática.

## Descripción

`ft_printf` replica el comportamiento de la función estándar `printf`, gestionando la salida formateada con distintos especificadores de conversión. El proyecto se compila como librería estática (`libftprintf.a`) para facilitar su integración en otros proyectos en C.

## Conversiones implementadas (Parte Obligatoria)
* `%c`: Imprime un único carácter.
* `%s`: Imprime una cadena de caracteres.
* `%p`: Imprime la dirección de un puntero en formato hexadecimal.
* `%d` / `%i`: Imprime un número entero decimal en base 10.
* `%u`: Imprime un número decimal sin signo.
* `%x` / `%X`: Imprime un número hexadecimal en minúsculas o mayúsculas.
* `%%`: Imprime el símbolo de porcentaje.

## Archivos

| Archivo | Descripción |
|---------|-------------|
| `ft_printf.c` | Punto de entrada principal — analiza el formato y gestiona las conversiones |
| `ft_putchar.c` | Imprime un único carácter y devuelve la longitud del caracter |
| `ft_putstr.c` | Imprime una cadena de caracteres y devuelve la longitud del string |
| `ft_putnbr.c` | Imprime un número entero en decimal y devuelve la longitut del numero |
| `ft_putnbr_base.c` | Imprime un número en una base dada (base10 solo positiva, hexadecimal, octal, etc.) |
| `ft_strlen.c` | Devuelve la longitud de una cadena |
| `ft_putptr.c` | Imprime la dirección de un puntero y devuelve la longitud de la direcion de memoria |
| `ft_printf.h` | Cabecera — prototipos e includes |

## Uso

### Compilar la librería

```bash
make
```

### Eliminar los archivos objeto

```bash
make clean
```

### Eliminar la librería y los archivos objeto

```bash
make fclean
```

### Recompilar desde cero

```bash
make re
```

### Enlazar con tu proyecto

```bash
gcc -Wall -Wextra -Werror main.c -L. -lftprintf -o mi_programa
```

O incluyendo la librería directamente:

```bash
gcc main.c libftprintf.a -o mi_programa
```

## Ejemplo

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("¡Hola, %s!\n", "mundo");
    ft_printf("Número: %d | Hex: %x | Puntero: %p\n", 42, 255, &main);
    return 0;
}
```

## Flags de compilación

La librería se compila con flags estrictos para garantizar la calidad del código:

```
-Wall -Wextra -Werror
```

## Notas

- La librería se genera con `ar rcs` para crear un archivo estático.
- Los archivos objeto se recompilan automáticamente si `ft_printf.h` o el `Makefile` cambian.

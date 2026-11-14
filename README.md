# Verificador de números primos

Este proyecto es una aplicación sencilla en C++ que recibe un número entero y determina si es primo o no.

## Descripción

El programa usa una función llamada `esprimo` para verificar si el valor ingresado cumple con la definición de número primo:

- Un número primo es mayor que 1
- Solo es divisible entre 1 y sí mismo
- Si tiene algún divisor distinto de 1 y de sí mismo, entonces no es primo

## Requisitos

Para compilar y ejecutar este proyecto necesitas un compilador de C++ instalado, por ejemplo:

- Visual Studio C++ Build Tools
- MinGW
- GCC

## Compilación

### Opción 1: con Visual Studio (cl.exe)

```bash
cl /EHsc programa.cpp /Feprograma.exe
```

### Opción 2: con MinGW o GCC

```bash
g++ programa.cpp -o programa.exe
```

## Ejecución

Una vez compilado, ejecuta el programa desde la línea de comandos:

```bash
programa.exe
```

Luego ingresa un número entero, por ejemplo:

```text
7
```

Salida esperada:

```text
primo
```

## Ejemplos

### Entrada

```text
13
```

### Salida

```text
primo
```

### Entrada

```text
12
```

### Salida

```text
no primo
```

## Estructura del proyecto

- `programa.cpp`: archivo principal con la lógica del programa
- `README.md`: documentación del proyecto

## Autor

- Autor: John Jander Hoyos.
- Materia: Logica de programacion
- Instituciòn Educativa Pascual Bravo
- 2026

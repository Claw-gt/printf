# Funciones variádicas

[Funciones variádicas](https://hardfloat.es/blog/2021/11/05/funciones-variadicas.html)

Las funciones variádicas son funciones que aceptan un número variable de parámetros. Un ejemplo puede ser la clásica función de C

`void add(int num_args, ...) {
}`

En el cuerpo de la función, es necesario usar una serie de *macros* para acceder a los argumentos que le hayamos pasado a la función. Estos son:

- va_list: información necesaria para el resto de macros
- va_start: acceso a los argumentos de la función variádica
- va_arg: al siguiente argumento de la función variádica
- va_end: el fin del acceso a los argumentos

## %i and %d

**There is no difference between the %i and %d format specifiers for printf** . We can see this by going to the draft C99 standard section 7.19.

## %x

Debería ser unsigned int. Para ser unsigned long tendría que ser **%lx**.

## %p

Para imprimir al completo toda la dirección de memoria, debería ser "unsigned long int", pues el tipo de direcciones de memoria en C (ver https://www.studysmarter.co.uk/explanations/computer-science/computer-programming/c-memory-address/#:~:text=In%20general%2C%20memory%20addresses%20are,four%20bits%20of%20the%20address.)

## Compile other program from its Makefile with Makefile

change directory by applying **-C** libft(same as cd libft) after the instruction.

`make -C libft` -> Executes instruction 'make' from libft/Makefile

same as:

`cd libft && make` -> The change of path goes before the instruction

MUY IMPORTANTE: copiar librería libft.a en la librería que estás creando
$(NAME): $(MY_OBJECTS)
		make -C libft
		**cp libft/libft.a $(NAME)**
		ar rcs $(NAME) $(MY_OBJECTS)
clean:
	rm -f $(MY_OBJECTS)
	make clean -C libft

fclean: clean
	rm -f $(NAME)
	cd libft && make fclean

## Return (-1)

write() function: "If write() is interrupted by a signal before it writes any data, it shall return -1 with errno"
- Check if recursive call returns -1.
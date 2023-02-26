# get_next_line - Reading a line on a fd is way too tedious

**Summary** <br/>
The aim of this project is to make you code a function that returns a line,
read from a file descriptor. <br/>
[PDF](https://cdn.intra.42.fr/pdf/pdf/27312/en.subject.pdf) en anglais

**NOTE** <br/>
Spécification des modifications (6 juin 2021):
Modification du prototype en char *get_next_line(int fd). <br/>
Renvoie NULL en cas d'erreur ; sinon, la ligne est lue.

## Index
[Lexique](#Lexique)
- Concepts
- Fonctions 
- Fonctions de la libft

[Mandatory part](#Mandatory)

[Bonus part](#Bonus)

[Tester](#Tester)

## Documentation


## <a name ="Lexique">Lexique</a> du vocabulaire 🦖

| Concept | Description |
| :-----: | :---------- |
static variables        | Static variables have a property of preserving their value even after they are out of their scope! Hence, static variables preserve their previous value in their previous scope and are not initialized again in the new scope. <br/> See [example](https://en.wikipedia.org/wiki/Static_variable "Wikipedia") and [explanations](https://www.geeksforgeeks.org/static-variables-in-c/ "geeksforgeeks")
File descriptor (fd)    | 
End-of-line (EOF)       | is a condition in a computer operating system where no more data can be read from a data source. [Explanation]
Fonction head           | 


### External fonctions allow to used

| Fonction | Description |
| :------: | :---------- |
read       | `ssize_t read(int fd, void *buf, size_t count);` <br/> Permet d'effectuer la lecture d'un fichier (à partir d'un descripteur de fichier). <br/> [man fr](http://manpagesfr.free.fr/man/man2/read.2.html "manpagefr") / [man ang](https://man7.org/linux/man-pages/man2/read.2.html "man7")
malloc     | <br/> While read value is positive, than malloc next line ❓❓❓
free       | <br/> Free memory if an error happened

### Fonctions used from libft

| Fonction  | Description |
| :-------: | :---------- |
ft_strlen   |
ft_strdup   |
ft_substr   | 
ft_strjoin | Alloue avec malloc et retourne une nouvelle chaine, résultat	de la concaténation de s1 et s2. [lien](https://github.com/a42qc/libft/blob/main/ft_strjoin.c)
ft_strchr   | Rechercher un caractère dans une chaîne, i.e. envoie un pointeur sur la première occurrence du caractère c dans la chaîne s. Renvoie un pointeur sur le caractère correspondant, ou NULL si le caractère n'a pas été trouvé.. [lien](https://github.com/a42qc/libft/blob/main/ft_strchr.c)

## <a name ="Mandatory">Mandatory part</a>

|         |        |
| :-----: | :----- |
Function name     | get_next_line
Prototype         | `char *get_next_line(int fd);`
Turn in files     | get_next_line.c, get_next_line_utils.c, get_next_line.h
Parameters        | File descriptor to read from
Return value      | Read line: correct behavior <br/> NULL: nothing else to read or an error occurred
External functs.  | read, malloc, free
Description       | Write a function which returns a line read from a file descriptor

### Hints 💡

    * Calling your function get_next_line in a loop will then allow you to read the text
      available on the file descriptor one line at a time until the end of it.
    * Your function should return the line that has just been read. If there is nothing
      else to read or if an error has occurred it should return NULL.
    * Make sure that your function behaves well when it reads from a file and when it
      reads from the standard input.
    * libft is not allowed for this project. You must add a get_next_line_utils.c file
      which will contain the functions that are needed for your get_next_line to work.
    * Your program must compile with the flag -D BUFFER_SIZE=xx which will be used
      as the buffer size for the read calls in your get_next_line. This value will be
      modified by your evaluators and by the moulinette.
    * The program will be compiled in this way: 
      `gcc -Wall -Wextra -Werror -D BUFFER_SIZE=42 <files>.c`
    * Your read must use the BUFFER_SIZE defined during compilation to read from 
      a file or from stdin. This value will be modified during the evaluation for 
      testing purposes.
    * In the header file get_next_line.h you must have at least the prototype 
      of the function get_next_line.
      
      /!\ Does your function still work if the BUFFER_SIZE value is 9999? And
      if the BUFFER_SIZE value is 1? And 10000000? Do you know why?

      /!\ You should try to read as little as possible each time get_next_line
      is called. If you encounter a newline, you have to return the
      current line. Don’t read the whole file and then process each line.

      /!\ Don’t turn in your project without testing. There are many tests to
      run, cover your bases. Try to read from a file, from a redirection,
      from standard input. How does your program behave when you send a
      newline to the standard output? And CTRL-D?
      
    * lseek is not an allowed function. File reading must be done only once.
    * We consider that get_next_line has undefined behavior if, between two calls, the
      same file descriptor switches to a different file before reading everything from the
      first fd.
    * Finally we consider that get_next_line has undefined behavior when reading from
      a binary file. However, if you wish, you can make this behavior coherent.
    * Global variables are forbidden.
    * Important: The returned line should include the ’\n’, except if you have reached
      the end of file and there is no ’\n’.

## <a name ="Bonus">Bonus part </a>

    The project get_next_line is straightforward and leaves very little room for bonuses,
    but we are sure that you have a lot of imagination. If you have aced the mandatory part,
    then by all means, complete this bonus part to go further. Just to be clear, no bonuses
    will be taken into consideration if the mandatory part isn’t perfect.
    Turn-in all 3 mandatory files ending by _bonus.[c\h] for this part.
    * To succeed get_next_line with a single static variable.
    * To be able to manage multiple file descriptors with your get_next_line. For
      example, if the file descriptors 3, 4 and 5 are accessible for reading, then you can
      call get_next_line once on 3, once on 4, once again on 3 then once on 5 etc.
      without losing the reading thread on each of the descriptors.
      
## Tester

### [gnltester](https://github.com/Tripouille/gnlTester "github") by Tripouille
Clone this tester in your get_next_line repository. 
Commands
make m = launch mandatory tests
make b = launch bonus tests
make a = launch mandatory tests + bonus tests
You can change the timeout value in Makefile
![Image where to change timeout value](https://camo.githubusercontent.com/2123ad1ff3219c225f1e2d6d5ca1b33b0287fe148a17f72a64d68aa1d416f21f/68747470733a2f2f692e696d6775722e636f6d2f6a55696d7061432e706e67)
      
      
      
      

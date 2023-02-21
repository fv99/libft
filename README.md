# libft

First project at 42 Prague.

### **Mandatory part:**

>You must redo a set of functions from the libc. Your functions will have the
same prototypes and implement the same behaviors as the originals. They must comply
with the way they are defined in their man. The only difference will be their names. They
will begin with the ’ft_’ prefix. For instance, strlen becomes ft_strlen

**Functions implemented:**

- `isdigit`
- `isalnum`
- `isascii`
- `isprint`
- `strlen`
- `memset`
- `bzero`
- `memcpy`
- `memmove`
- `strlcpy`
- `strlcat`
- `toupper`
- `tolower`
- `strchr`
- `strrchr`
- `strncmp`
- `memchr`
- `memcmp`
- `strnstr`
- `atoi`

Functions using malloc:
- `calloc`
- `strdup`

### **Bonus part:**

Functions for manipulating lists, based on the following declaration:
```
typedef struct s_list
{
	void *content;
	struct s_list *next;
} 		t_list;
```

**Functions implemented:**
- `lstnew`
- `lstadd_front`
- `lstsize`
- `lstlast`
- `lstadd_back`
- `lstdelone`
- `lstclear`
- `lstiter`
- `lstmap`

## Additional functions:
These were added to the library after as they are later in the curriculum.

- [ft_printf](https://github.com/fv99/ft_printf) - *My implementation of printf(). Does not handle all flags of the original or the buffer management.*

- [get_next_line](https://github.com/fv99/get_next_line) - *Function that returns a line read from a file descriptors. Handles multiple file descriptors.*
#ifndef LIBFT_H
#define LIBFT_H

int	ft_isalpha(int);
int	ft_isdigit(int);
size_t	ft_strlen(const char *);
int	ft_atoi(const char *);
int	ft_isalnum(int);
int	ft_isascii(int);
int	ft_isprint(int);
char	*ft_strchr(const char *, int);
size_t	ft_strlcat(char *, const char *, size_t);
size_t	ft_strlcpy(char *, const char *, size_t);
int	ft_strncmp(const char *, const char *, size_t);
char	*ft_strnstr(const char *, const char *, size_t);
char	*ft_strrchr(const char *, int);
int	ft_toupper(int);
int	ft_tolower(int);
typedef unsigned int size_t;
#endif

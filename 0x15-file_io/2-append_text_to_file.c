#include "main.h"
/**
* append_text_to_file - Appends text to the end of a file.
* @filename: The name of the file to append to.
* @text_content: The text to be appended.
*
* Return: 1 on success, -1 on failure.
*/
int append_text_to_file(const char *filename, char *text_content)
{
ssize_t writtenbytes;
int opener;
if (filename == NULL || text_content == NULL)
{
return (-1);
}
opener = open(filename, O_WRONLY | O_APPEND);
if (opener == -1)
{
return (-1);
}
writtenbytes = write(opener, text_content, strlen(text_content));
if (writtenbytes == -1)
{
close(opener);
return (-1);
}
close(opener);
return (1);
}

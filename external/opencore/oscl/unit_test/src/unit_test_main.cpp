

#include "unit_test_common.h"
#include "unit_test_args.h"

extern int local_main(FILE *filehandle, cmd_line* cmd_line_ptr);
#define MAXARGS 50


#include "unit_test_local_string.h"

int main(int argc, char **argv)
{
    FILE* filehandle = stdout;
    int n = 1;

    cmd_line *command_line_ptr;
    cmd_line_linux command_line;
    command_line_ptr = &command_line;

    // remove leading and trailing quotation marks
    for (int i = 0; i < argc; ++i)
    {
        // skip ',`," at start
        if (argv[i][0] == '"' || argv[i][0] == '\'' || argv[i][0] == '`')
            argv[i] += 1;
        size_t strEnd = _strlen(argv[i]);
        if (strEnd > 0)
        {
            strEnd -= 1; // last char
            if (argv[i][strEnd] == '"' || argv[i][strEnd] == '\'' || argv[i][strEnd] == '`')
                argv[i][strEnd] = 0;
        }
    }


    if (argc > 1)
    {
        // output to file
        if (_strcmp(argv[1], "-output") == 0)
        {
            if (argc == 2)
            {
                printf("\nUSAGE: %s [-output filename] [other args] \n", argv[0]);
                return -1;
            }

            filehandle = fopen(argv[2], "a+");
            n += 2;
        }
    }

    command_line.setup(argc - n, &argv[n]);
    return local_main(filehandle, command_line_ptr);

}



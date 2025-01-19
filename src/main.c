#include "database.h"
#include <stdio.h>

int main() {
    Table table = {"MyTable", NULL};

    insert_line(&table, 1, "Première entrée");
    insert_line(&table, 2, "Seconde entrée");

    printf("Table: %s\n", table.name);
    select_lines(&table);

    return 0;
}

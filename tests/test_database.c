#include "database.h"
#include <assert.h>
#include <stdio.h>

void test_insert_and_select() {
    Table table = {"TestTable", NULL};

    insert_line(&table, 1, "Test1");
    insert_line(&table, 2, "Test2");

    assert(table.head != NULL);
    assert(table.head->id == 2);
    assert(table.head->next->id == 1);

    printf("Tests passed.\n");
}

int main() {
    test_insert_and_select();
    return 0;
}

# Virtual-memory-
int main() {
    int pages[MAX_PAGES];
    int n, f, choice;

    /* AUTO OPEN WEB PAGE */
    printf("Launching Virtual Memory Management Simulation...\n");
    system("start http://localhost:8000");   // Windows

    printf("Enter number of pages: ");
    scanf("%d", &n);

    printf("Enter page reference string:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &pages[i]);

    printf("Enter number of frames: ");
    scanf("%d", &f);

    do {
        printf("\n===== Virtual Memory Management =====\n");
        printf("1. FIFO Page Replacement\n");
        printf("2. LRU Page Replacement\n");
        printf("3. Optimal Page Replacement\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: fifo(pages, n, f); break;
            case 2: lru(pages, n, f); break;
            case 3: optimal(pages, n, f); break;
            case 4: printf("Exiting program...\n"); break;
            default: printf("Invalid choice!\n");
        }
    } while (choice != 4);

    return 0;
}

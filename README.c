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
<!DOCTYPE html>
<html>
<head>
    <title>Virtual Memory Management Simulation</title>
    <style>
        body {
            font-family: Arial;
            background-color: #f4f4f4;
            text-align: center;
            padding-top: 60px;
        }
        .box {
            background: white;
            width: 60%;
            margin: auto;
            padding: 30px;
            border-radius: 10px;
        }
    </style>
</head>
<body>

<div class="box">
    <h1>Virtual Memory Management Simulation</h1>
    <p>
        This webpage acts as the user interface for demonstrating
        FIFO, LRU, and Optimal page replacement algorithms.
    </p>
    <p>
        The actual simulation is executed in C programming language
        and runs in the background.
    </p>
    <p><b>Please observe the terminal window for live output.</b></p>
</div>

</body>
</html>p

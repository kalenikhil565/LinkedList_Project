# C++ Book Management System 📚

## Description
This project implements a **Book Management System** using **C++**. The system utilizes advanced features such as **Linked Lists**, **Classes**, **Templates**, **Operator Overloading**, **File Handling**, **Copy Constructors**, and **Destructors**. It enables users to manage a collection of books through functionalities like adding, deleting, searching, and modifying book records. The system provides a simple yet effective interface for managing a library or personal book collection.

## Features 🌟

### 1. **Linked List**  
The system stores book records dynamically using a **linked list**. Each book is represented as a node containing essential information such as title, author, ISBN, and publication year. This approach allows easy manipulation of books (adding, deleting, and displaying) without the need for contiguous memory allocation.

### 2. **Classes and Templates**  
- **Classes**: The project is organized using classes to represent different entities like `Book` and `BookManagementSystem`. This modular design improves code readability and maintainability.
- **Templates**: Templates are utilized for generic operations, enhancing the scalability and reusability of the system. This feature makes it easier to extend the project with new data types.

### 3. **Operator Overloading**  
Custom **operator overloading** simplifies operations like comparing and displaying book records. For instance, the `<<` operator is overloaded to print book details, while `==` compares two books based on attributes like ISBN.

### 4. **File Handling**  
**File handling** ensures that book data persists across program executions. Book records are stored in a text file, allowing users to save, retrieve, and modify their collection over multiple sessions.

### 5. **Copy Constructor**  
The **copy constructor** ensures proper object copying, preventing issues like shallow copies that can lead to memory corruption. This guarantees safe copying of books when required, especially during insertion into the linked list.

### 6. **Destructor**  
The **destructor** ensures proper cleanup of dynamically allocated memory when the program ends or objects go out of scope. It prevents memory leaks by deallocating all nodes of the linked list and releasing any other allocated resources.

## Technologies Used 💻
- **C++**: Object-oriented programming principles, memory management, and efficient data structures.
- **Linked Lists**: Used for dynamic storage and manipulation of book records.
- **Templates**: Makes the system generic, scalable, and reusable.
- **File Handling**: Enables persistence of book data across sessions.
- **Operator Overloading**: Simplifies comparisons and printing of book records.
- **Copy Constructor**: Prevents memory issues by ensuring proper copying of objects.
- **Destructor**: Ensures memory cleanup and avoids memory leaks.

## How It Works ⚙️
The **C++ Book Management System** performs several key operations:

### 1. **Adding Books**  
Users can add new books to the system by providing details such as title, author, ISBN, and publication year. Each book is stored in the linked list.

### 2. **Deleting Books**  
Books can be deleted by searching for their ISBN or title. Once found, the book is removed from the linked list, and the memory is deallocated.

### 3. **Searching Books**  
Users can search for a book by its title or ISBN. If a match is found, the details of the book are displayed.

### 4. **Modifying Book Details**  
Book details such as title, author, or ISBN can be modified. After modification, the updated record is saved back into the linked list and the file.

### 5. **File Persistence**  
All book records are saved to a text file upon exiting the system. Upon restarting the program, the records are loaded from the file and inserted into the linked list, ensuring data persistence.

### 6. **Memory Cleanup (Destructor)**  
When the program exits, the **destructor** automatically deallocates all memory used by the linked list. It ensures that no memory leaks occur by releasing resources allocated during the program's execution.

### 7. **User Interface**  
The system provides a **command-line interface (CLI)** where users can input commands to perform various operations like adding, deleting, searching, and modifying book records.

## Getting Started 🚀

To run the project:

1. **Clone the repository**:
    ```bash
    git clone https://github.com/username/Book-Management-System.git
    ```

2. **Navigate to the project directory**:
    ```bash
    cd Book-Management-System
    ```

3. **Compile the code using a C++ compiler**:
    ```bash
    g++ main.cpp -o book_management_system
    ```

4. **Run the executable**:
    ```bash
    ./book_management_system
    ```

## Contributing 🤝
Feel free to **fork** this project, **submit issues**, or **create pull requests**. Contributions are welcome to improve the functionality or add new features!

## License 📝
This project is licensed under the **MIT License** - see the [LICENSE](LICENSE) file for details.

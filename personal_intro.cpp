/*
 * Personal Introduction Program
 * Created by: Tajdar Khalil
 * Date: September 21, 2026
 * 
 * Description: This program displays personal information 
 * about myself in a formatted way on the console.
 */

/* 
 * My Learning Goals:
 * 
 * 1. Master core C++ syntax, memory control, and pointer mechanics.
 * 2. Deepen understanding of Object-Oriented Programming principles.
 * 3. Build fast, well-structured, and reliable console applications.
 */

#include <iostream>
#include <string>

// ANSI escape codes for terminal color and formatting
namespace Color {
    const std::string RESET   = "\033[0m";
    const std::string BOLD    = "\033[1m";
    const std::string CYAN    = "\033[1;36m";
    const std::string YELLOW  = "\033[1;33m";
    const std::string GREEN   = "\033[1;32m";
    const std::string MAGENTA = "\033[1;35m";
    const std::string BLUE    = "\033[1;34m";
    const std::string WHITE   = "\033[1;37m";
    const std::string GRAY    = "\033[90m";
}

int main() {
    // ==========================================
    // SECTION 1: ASCII ART HEADER WITH COLOR
    // ==========================================
    std::cout << Color::CYAN;
    std::cout << "  ___ ___ ___ ___  ___  _  _   _   _     " << std::endl;
    std::cout << " | _ \\ __| _ \\ __|/ _ \\| \\| | /_\\ | |    " << std::endl;
    std::cout << " |  _/ _||   / _| | (_) | .` |/ _ \\| |__  " << std::endl;
    std::cout << " |_| |___|_|_\\___| \\___/|_|\\_/_/ \\_\\____| " << std::endl;
    std::cout << "       |_ _| \\| |_   _| _ \\/ _ \\         " << std::endl;
    std::cout << "        | || .` | | | |   / (_) |        " << std::endl;
    std::cout << "       |___|_|\\_| |_| |_|_\\\\___/         " << std::endl;
    std::cout << Color::GRAY << "=========================================================" << Color::RESET << std::endl;

    // Aligning fields using \t escape sequences
    std::cout << Color::YELLOW << "Name:" << Color::RESET << "\t\tTajdar Khalil" << std::endl;
    std::cout << Color::YELLOW << "Role:" << Color::RESET << "\t\tAspiring Software Engineer" << std::endl;
    std::cout << Color::YELLOW << "Hometown:" << Color::RESET << "\tChakwal, Pakistan" << std::endl;
    std::cout << Color::YELLOW << "Fav Lang:" << Color::RESET << "\tC++ & Python" << std::endl;
    std::cout << Color::YELLOW << "Hobbies:" << Color::RESET << "\tTravelling, AI Enthusiasm, Discover the world" << std::endl;

    // ==========================================
    // SECTION 2: EDUCATION & CAREER OBJECTIVES
    // ==========================================
    std::cout << "\n" << Color::MAGENTA << Color::BOLD << "EDUCATION" << Color::RESET << std::endl;
    std::cout << Color::GRAY << "---------------------------------------------------------" << Color::RESET << std::endl;
    std::cout << Color::YELLOW << "Degree:" << Color::RESET << "\t\tBS Data Science" << std::endl;
    std::cout << Color::YELLOW << "School:" << Color::RESET << "\t\tVirtual University" << std::endl;
    std::cout << Color::YELLOW << "Year:" << Color::RESET << "\t\t2026" << std::endl;

    std::cout << "\n" << Color::MAGENTA << Color::BOLD << "CAREER GOALS" << Color::RESET << std::endl;
    std::cout << Color::GRAY << "---------------------------------------------------------" << Color::RESET << std::endl;
    std::cout << Color::YELLOW << "Short-term:" << Color::RESET << "\tSecure a software engineering internship and master C++." << std::endl;
    std::cout << Color::YELLOW << "Long-term:" << Color::RESET << "\tArchitect high-performance systems and game engines." << std::endl;

    // ==========================================
    // SECTION 3: COURSE MOTIVATION & TOPICS
    // ==========================================
    std::cout << "\n" << Color::BLUE << Color::BOLD << "WHY I'M TAKING THIS COURSE" << Color::RESET << std::endl;
    std::cout << Color::GRAY << "---------------------------------------------------------" << Color::RESET << std::endl;
    std::cout << "To understand how low-level systems function, write memory-efficient code," << std::endl;
    std::cout << "and gain the foundational discipline needed for systems engineering." << std::endl;

    std::cout << "\n" << Color::BLUE << Color::BOLD << "TOPICS I'M EXCITED ABOUT" << Color::RESET << std::endl;
    std::cout << Color::GRAY << "---------------------------------------------------------" << Color::RESET << std::endl;
    std::cout << Color::GREEN << " * [01]\t" << Color::RESET << "Pointers and Manual Memory Management" << std::endl;
    std::cout << Color::GREEN << " * [02]\t" << Color::RESET << "Object-Oriented Polymorphism & Inheritance" << std::endl;
    std::cout << Color::GREEN << " * [03]\t" << Color::RESET << "Standard Template Library (STL) Algorithms" << std::endl;
    std::cout << Color::GREEN << " * [04]\t" << Color::RESET << "Modern C++ Smart Pointers & Move Semantics" << std::endl;

    // ==========================================
    // SECTION 4: FOOTER & CLOSING
    // ==========================================
    std::cout << "\n" << Color::CYAN << "=========================================================" << std::endl;
    std::cout << Color::WHITE << Color::BOLD << "       Thank you for reading my introduction!            " << Color::RESET << std::endl;
    std::cout << Color::CYAN << "=========================================================" << Color::RESET << std::endl;

    return 0;
}

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>HR Management System | C++ OOP Project</title>
    <style>
        body {
            font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
            line-height: 1.6;
            color: #333;
            max-width: 900px;
            margin: 0 auto;
            padding: 20px;
            background-color: #f5f7fa;
        }
        .header {
            text-align: center;
            margin-bottom: 30px;
            padding-bottom: 20px;
            border-bottom: 1px solid #e1e4e8;
        }
        h1 {
            color: #2c3e50;
            font-size: 2.5em;
            margin-bottom: 10px;
        }
        h2 {
            color: #3498db;
            margin-top: 30px;
            border-bottom: 2px solid #e1e4e8;
            padding-bottom: 5px;
        }
        h3 {
            color: #2980b9;
        }
        .badge {
            display: inline-block;
            padding: 3px 7px;
            font-size: 12px;
            font-weight: bold;
            line-height: 1;
            color: #fff;
            background-color: #3498db;
            border-radius: 20px;
            margin-right: 5px;
            margin-bottom: 5px;
        }
        .features {
            display: flex;
            flex-wrap: wrap;
            gap: 15px;
            margin: 20px 0;
        }
        .feature {
            flex: 1 1 200px;
            background: white;
            padding: 15px;
            border-radius: 5px;
            box-shadow: 0 2px 5px rgba(0,0,0,0.1);
        }
        code {
            background-color: #f0f0f0;
            padding: 2px 4px;
            border-radius: 3px;
            font-family: 'Courier New', Courier, monospace;
        }
        pre {
            background-color: #282c34;
            color: #abb2bf;
            padding: 15px;
            border-radius: 5px;
            overflow-x: auto;
        }
        a {
            color: #3498db;
            text-decoration: none;
        }
        a:hover {
            text-decoration: underline;
        }
        .profile-img {
            width: 150px;
            height: 150px;
            border-radius: 50%;
            object-fit: cover;
            margin: 20px auto;
            display: block;
            border: 5px solid #3498db;
        }
        .contact-badges {
            display: flex;
            justify-content: center;
            gap: 10px;
            flex-wrap: wrap;
            margin: 20px 0;
        }
        .contact-badge {
            padding: 8px 15px;
            background-color: #3498db;
            color: white;
            border-radius: 5px;
            font-size: 14px;
            display: flex;
            align-items: center;
        }
        .contact-badge:hover {
            background-color: #2980b9;
            text-decoration: none;
        }
    </style>
</head>
<body>
    <div class="header">
        <h1>HR Management System</h1>
        <p>A C++ Object-Oriented Programming project demonstrating encapsulation and modern software design principles</p>
    </div>
    <img src="https://via.placeholder.com/800x400.png?text=HR+Management+System+Screenshot" alt="HR System Screenshot" style="width:100%; border-radius:5px; margin-bottom:20px;">
    <h2>📌 Project Overview</h2>
    <p>This HR Management System is a console-based application developed in C++ that implements core Object-Oriented Programming concepts with a strong emphasis on encapsulation. The system allows for efficient management of employee records, departments, and payroll information.</p>
    <h2>✨ Key Features</h2>
    <div class="features">
        <div class="feature">
            <h3>Employee Management</h3>
            <p>Add, view, update, and delete employee records with comprehensive details.</p>
        </div>
        <div class="feature">
            <h3>Department Hierarchy</h3>
            <p>Organize employees into departments with proper reporting structures.</p>
        </div>
        <div class="feature">
            <h3>Payroll System</h3>
            <p>Calculate salaries, bonuses, and deductions with tax considerations.</p>
        </div>
        <div class="feature">
            <h3>Data Persistence</h3>
            <p>Save and load employee data to/from files for long-term storage.</p>
        </div>
    </div>
    <h2>🛠️ Technologies Used</h2>
    <p>
        <span class="badge">C++17</span>
        <span class="badge">OOP</span>
        <span class="badge">Encapsulation</span>
        <span class="badge">File I/O</span>
        <span class="badge">STL</span>
    </p>
    <h2>📂 Project Structure</h2>
    <pre>
HR-Management-System/
├── include/            # Header files
│   ├── Employee.h      # Employee class definition
│   ├── Department.h    # Department class definition
│   └── Payroll.h       # Payroll system
├── src/                # Source files
│   ├── main.cpp        # Main application
│   ├── Employee.cpp    # Employee implementation
│   └── Department.cpp  # Department implementation
├── data/               # Data storage
│   └── employees.dat   # Employee records
└── README.md           # Project documentation
    </pre>
    <h2>🚀 Getting Started</h2>
    <h3>Prerequisites</h3>
    <ul>
        <li>C++17 compatible compiler (g++, clang, MSVC)</li>
        <li>Make or CMake for building</li>
    </ul>
    <h3>Compilation</h3>
    <pre><code>g++ -std=c++17 src/*.cpp -Iinclude -o hr_system</code></pre>
    <h3>Usage</h3>
    <pre><code>./hr_system</code></pre>
    <h2>👨‍💻 Developer</h2>
    <img src="https://media.giphy.com/media/SWoSkN6DxTszqIKEqv/giphy.gif" alt="Developer" class="profile-img">
    <h3 align="center">Your Name</h3>
    <p align="center">Computer Science Student | C++ Developer</p>
    <div class="contact-badges">
        <a href="https://linkedin.com/in/yourprofile" class="contact-badge">LinkedIn</a>
        <a href="mailto:youremail@example.com" class="contact-badge">Email</a>
        <a href="https://github.com/yourusername" class="contact-badge">GitHub</a>
    </div>
    <h2>📜 License</h2>
    <p>This project is licensed under the MIT License - see the <a href="#">LICENSE</a> file for details.</p>
</body>
</html>

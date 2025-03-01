# Q-Pass Lite - Simple Password Manager  

**Q-Pass Lite** is a console-based password manager written in C. It allows users to store, view, and generate passwords. Passwords are saved in a text file **without hashing or encryption**.  

---

## 📌 Features  
✅ Save passwords (stored in `passwords.txt`)  
✅ View saved passwords  
✅ Generate random passwords  

⚠️ **Important!** This manager **does not hash or encrypt passwords**. They are stored in plain text.  

---

## 🔧 Build and Run  

1️⃣ **Clone the repository:**  
```sh
git clone https://github.com/Qu0i/Q-Pass-lite.git
cd Q-Pass-lite
```

2️⃣ **Compile the project (GCC):**
```sh
gcc -o qpass main.c passAdd.c showPasswords.c passGen.c -Wall
```

3️⃣ **Run the password manager:**
```sh
./qpass
```

---

## 🎮 How to Use
1️⃣ **Choose an option from the menu:**
```sh
1. View saved passwords  
2. Save a new password  
3. Generate a password
```

2️⃣ **Saving a password:**
- Enter the site, login, and password → they will be stored in `passwords.txt`

3️⃣ **Viewing saved passwords:**
- The program will display all stored passwords.

4️⃣ **Generating a password:**
- The manager will generate a random password.

---

## ⚠️ Limitations
🔴 **Passwords are stored in plain text (`passwords.txt`).**

🔴 **No encryption or hashing.**

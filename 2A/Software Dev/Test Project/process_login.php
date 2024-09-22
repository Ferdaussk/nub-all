<!-- process_login.php -->
<?php
if ($_SERVER["REQUEST_METHOD"] == "POST") {
    // Retrieve username and password from the form
    $username = $_POST["username"];
    $password = $_POST["password"];

    // Call C program (replace 'your_c_login_program' with the actual executable)
    $command = "./your_c_login_program " . escapeshellarg($username) . " " . escapeshellarg($password);
    $output = shell_exec($command);

    // Check the C program's output
    if (trim($output) === "success") {
        echo "<p>Login successful!</p>";
    } else {
        echo "<p>Login failed. Please check your credentials.</p>";
    }
}
?>

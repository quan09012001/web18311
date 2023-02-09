<?php
if ($_SERVER["REQUEST_METHOD"] == "POST") {
  $fullName = $_POST["full-name"];
  $email = $_POST["email"];
  $password = $_POST["password"];
  $message = $_POST["message"];

  $data = $fullName . "," . $email . "," . $password . "," . $message . "\n";
  file_put_contents("data.txt", $data, FILE_APPEND | LOCK_EX);
}
?>

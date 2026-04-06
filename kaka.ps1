Set-ExecutionPolicy -ExecutionPolicy Bypass -Scope Process -Force
$message = "Hello"
Write-Host $message
$message | Out-File "$env:TEMP\output.txt"

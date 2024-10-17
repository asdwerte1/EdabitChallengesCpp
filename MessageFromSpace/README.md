# Message From Space

You have received an encrypted message from space. Your task is to decrypt the message with the following simple rules:

* Message string will consist of capital letters, numbers, and brackets only.
* When there's a block of code inside the brackets, such as [10AB], it means you need to repeat the letters AB for 10 times.
* Message can be embedded in multiple layers of blocks.
* Final decrypted message will only consist of capital letters.

Create a function that takes encrypted message str and returns the decrypted message.
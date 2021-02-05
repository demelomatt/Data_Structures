# Structure

In C programming, a struct (or structure) is a collection of variables (can be of different types) under a single name.

[Essential](Structure%208a284599e8c0410cb3eefe2434e7aaa7/Essential%20194a904218964ea59b7dccc1e91e2426.md)

[Nested structures](Structure%208a284599e8c0410cb3eefe2434e7aaa7/Nested%20structures%207d9345956609487bb904c78119e6dba3.md)

[Array of structures](Structure%208a284599e8c0410cb3eefe2434e7aaa7/Array%20of%20structures%20e292c57974e94b50a81d95ed86c28b3e.md)

[Structure pointer](Structure%208a284599e8c0410cb3eefe2434e7aaa7/Structure%20pointer%201813f68c707544ed8542355ed4a2fa5d.md)

[Dynamic memory allocation of structs](Structure%208a284599e8c0410cb3eefe2434e7aaa7/Dynamic%20memory%20allocation%20of%20structs%20a0f2bd60da5648abac23a3cbdad1889c.md)

[Structure and Function](Structure%208a284599e8c0410cb3eefe2434e7aaa7/Structure%20and%20Function%20076cb7ba916a4dcaa1af430c33f2b902.md)

**Limitations of C Structures**

In C language, Structures provide a method for packing together data of different types. A Structure is a helpful tool to handle a group of logically related data items. However, C structures have some limitations.

- The C structure does not allow the struct data type to be treated like built-in data types.
- We cannot use operators like +,- etc. on Structure variables.
- **No Data Hiding:** C Structures do not permit data hiding. Structure members can be accessed by any function, anywhere in the scope of the Structure.
- **Functions inside Structure:** C structures do not permit functions inside Structure
- **Static Members:** C Structures cannot have static members inside their body
- **Access Modifiers:** C Programming language do not support access modifiers. So they cannot be used in C Structures.
- **Construction creation in Structure:** Structures in C cannot have constructor inside Structures.
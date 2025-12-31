---

## 🟢 BASIC

### 1. What is JavaScript?

JavaScript is a **high-level, dynamic programming language** used to create interactive and dynamic content on the web.
It is a **core web technology**, along with HTML and CSS.

---

### 2. Explain the difference between `let`, `var`, and `const`

* `var` → function-scoped
* `let` → block-scoped, allows reassignment
* `const` → block-scoped, no reassignment

---

### 3. What are the data types in JavaScript?

* String
* Number
* Boolean
* Null
* Undefined
* Symbol
* BigInt
* Object (arrays, functions, etc.)

---

### 4. How do you create a function in JavaScript?

```javascript
function myFunction() {
  // code to be executed
}
```

---

### 5. Difference between `==` and `===`

* `==` → compares values (type coercion)
* `===` → compares value and type (strict)

---

### 6. What are template literals?

* Use backticks `` ` ``
* Allow variable interpolation using `${}`

```javascript
const name = "John";
console.log(`Hello, ${name}!`);
```

---

### 7. Explain `Array.map()`

Creates a **new array** by applying a function to each element.

```javascript
const numbers = [1, 2, 3];
const doubled = numbers.map(n => n * 2);
```

---

### 8. What is an anonymous function?

A function **without a name**, often used as a callback.

```javascript
setTimeout(function() {
  console.log("This is an anonymous function");
}, 1000);
```

---

### 9. Difference between `null` and `undefined`

* `undefined` → declared but not assigned
* `null` → explicitly assigned as empty

---

### 10. Purpose of the `this` keyword

* Refers to the **object that owns the function**
* Depends on execution context

---

## 🟡 INTERMEDIATE

### 11. Explain closures

A closure allows a function to **access variables from its outer scope** even after the outer function has finished executing.

```javascript
function outerFunction() {
  let outerVar = 'I am outside!';
  return function innerFunction() {
    console.log(outerVar);
  };
}
```

---

### 12. What is event delegation?

Handling events using a **single parent listener** instead of multiple child listeners.

---

### 13. How does the prototype chain work?

JavaScript looks for properties:

1. On the object
2. On its prototype
3. Up the chain until `Object.prototype`

---

### 14. Difference between `call()`, `apply()`, and `bind()`

* `call()` → arguments individually
* `apply()` → arguments as array
* `bind()` → returns a new bound function

---

### 15. Asynchronous JavaScript & Promises

Promises represent values that may be available **now, later, or never**.

```javascript
const promise = new Promise((resolve, reject) => {
  if (success) resolve(result);
  else reject(error);
});
```

---

### 16. What is the event loop?

Manages execution of:

* Call stack
* Callback queue
* Microtasks

---

### 17. Explain `async` and `await`

```javascript
async function fetchData() {
  const response = await fetch('url');
  return response.json();
}
```

---

### 18. `forEach()` vs `map()`

* `forEach()` → no return
* `map()` → returns new array

---

### 19. Error handling in JavaScript

```javascript
try {
  // risky code
} catch (error) {
  // handle error
} finally {
  // always executes
}
```

---

### 20. Higher-order functions

Functions that **take or return other functions**.

---

## 🔴 ADVANCED

### 21. Purpose of `Object.create()`

Creates an object with a **specified prototype**.

```javascript
const proto = { greet() { console.log('Hello'); } };
const obj = Object.create(proto);
```

---

### 22. JavaScript garbage collection

Uses **mark-and-sweep** to remove unreachable objects automatically.

---

### 23. Generators

Functions that can **pause and resume execution**.

```javascript
function* generatorFunction() {
  yield 'First';
  yield 'Second';
}
```

---

### 24. Currying

Transforms a function into **nested single-argument functions**.

```javascript
function curry(a) {
  return b => c => a + b + c;
}
```

---

### 25. Memoization

Caches results of expensive function calls.

```javascript
function memoize(fn) {
  const cache = {};
  return function(...args) {
    const key = JSON.stringify(args);
    if (cache[key]) return cache[key];
    const result = fn(...args);
    cache[key] = result;
    return result;
  };
}
```

---

### 26. JavaScript performance optimization

* Reduce DOM access
* Debounce & throttle
* Lazy loading
* Web Workers

---

### 27. Deep vs Shallow copy

* Shallow → top-level copy
* Deep → recursive copy

```javascript
const shallow = Object.assign({}, obj);
const deep = JSON.parse(JSON.stringify(obj));
```

---

### 28. WeakMap and WeakSet

* Hold **weak references**
* Do not prevent garbage collection

---

### 29. JavaScript modules (`require` vs `import`)

* `require` → CommonJS (Node.js)
* `import` → ES6 modules (static)

---

### 30. Significance of `Symbol`

* Unique, immutable identifiers
* Prevent property name collisions

---

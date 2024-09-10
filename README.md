<body>

    <h1>Special Number Checker</h1>

    <h2>Overview</h2>
    <p>This C++ program determines whether a given number can be represented as the sum of consecutive positive integers starting from 1. If the number can be represented this way, the program prints the sequence of numbers that sum to the given number and marks it as a "Special number". If not, it indicates that the number is not special.</p>

    <h2>Features</h2>
    <ul>
        <li>Checks if a number can be represented as a sum of consecutive integers starting from 1.</li>
        <li>Prints the sequence of numbers if the number is special.</li>
        <li>Provides appropriate messages for both special and non-special numbers.</li>
    </ul>

    <h2>Files</h2>
    <ul>
        <li><code>special_number.cpp</code>: The main C++ source file containing the code.</li>
    </ul>

    <h2>Usage</h2>
    <ol>
        <li><strong>Clone the repository:</strong>
            <pre><code>git clone https://github.com/yourusername/special-number-checker.git</code></pre>
        </li>
        <li><strong>Navigate to the project directory:</strong>
            <pre><code>cd special-number-checker</code></pre>
        </li>
        <li><strong>Compile the code:</strong>
            <pre><code>g++ -o special_number special_number.cpp</code></pre>
        </li>
        <li><strong>Run the executable:</strong>
            <pre><code>./special_number</code></pre>
        </li>
        <li><strong>Enter a number when prompted to check if it's a special number.</strong></li>
    </ol>

    <h2>Example</h2>
    <div class="example-output">
        <strong>For an input of <code>6</code>:</strong>
        <pre><code>Enter Number= 
6
Special number
1 + 2 + 3
</code></pre>
    </div>
    <div class="example-output">
        <strong>For an input of <code>7</code>:</strong>
        <pre><code>Enter Number= 
7
Not a special number.
</code></pre>
    </div>

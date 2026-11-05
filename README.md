<h1 align="center"> Smart Health & Nutrition Analyzer</h1>

<p align="center">
  A menu-driven C application for tracking food intake, analyzing nutrition,
  and monitoring basic health indicators.
</p>

<p align="center">
  <img src="https://img.shields.io/badge/Language-C-blue?style=for-the-badge&logo=c" alt="C">
  <img src="https://img.shields.io/badge/Platform-Console%20Based-green?style=for-the-badge" alt="Console Based">
  <img src="https://img.shields.io/badge/Status-Completed-success?style=for-the-badge" alt="Project Status">
</p>

---

<h2>📌 Overview</h2>

<p>
  The <b>Smart Health & Nutrition Analyzer</b> is a console-based application
  developed using the C programming language. It allows users to record food
  consumption and calculate total calories, protein, carbohydrates, and fat.
</p>

<p>
  The application also provides basic diet analysis, a diet score, food
  comparisons, nutrient identification, a BMI calculator, and a water intake
  tracker.
</p>

<h2>✨ Features</h2>

<table>
  <tr>
    <th>Feature</th>
    <th>Description</th>
  </tr>
  <tr>
    <td>🍽️ Food Intake Tracking</td>
    <td>Add food items and specify their quantities.</td>
  </tr>
  <tr>
    <td>📊 Nutrition Report</td>
    <td>Calculate total calories, protein, carbohydrates, and fat.</td>
  </tr>
  <tr>
    <td>🥗 Diet & Meal Analysis</td>
    <td>Evaluate food intake based on weight loss, muscle gain, and maintenance goals.</td>
  </tr>
  <tr>
    <td>💯 Diet Score & Deficiency Check</td>
    <td>Generate a basic diet score and identify potential nutritional imbalances.</td>
  </tr>
  <tr>
    <td>⚖️ Food Comparison</td>
    <td>Compare two food items based on their calorie content.</td>
  </tr>
  <tr>
    <td>💪 Top Nutrient Finder</td>
    <td>Identify the food item with the highest protein content.</td>
  </tr>
  <tr>
    <td>📏 BMI Calculator</td>
    <td>Calculate Body Mass Index using weight and height.</td>
  </tr>
  <tr>
    <td>💧 Water Intake Tracker</td>
    <td>Check daily water consumption based on the number of glasses entered.</td>
  </tr>
</table>

<h2>🍎 Available Food Items</h2>

<p>The application currently includes five predefined food items:</p>

<table>
  <tr>
    <th>Food</th>
    <th>Calories (kcal)</th>
    <th>Protein (g)</th>
    <th>Carbs (g)</th>
    <th>Fat (g)</th>
  </tr>
  <tr>
    <td>Rice</td>
    <td>130</td>
    <td>2.7</td>
    <td>28</td>
    <td>0.3</td>
  </tr>
  <tr>
    <td>Egg</td>
    <td>155</td>
    <td>13</td>
    <td>1.1</td>
    <td>11</td>
  </tr>
  <tr>
    <td>Apple</td>
    <td>52</td>
    <td>0.3</td>
    <td>14</td>
    <td>0.2</td>
  </tr>
  <tr>
    <td>Milk</td>
    <td>42</td>
    <td>3.4</td>
    <td>5</td>
    <td>1</td>
  </tr>
  <tr>
    <td>Bread</td>
    <td>265</td>
    <td>9</td>
    <td>49</td>
    <td>3.2</td>
  </tr>
</table>

<p><i>Note: Nutrition values are predefined sample values in the program.</i></p>

<h2>🛠️ Technologies Used</h2>

<p>
  <img src="https://img.shields.io/badge/C-Programming-blue?logo=c&logoColor=white" alt="C">
  <img src="https://img.shields.io/badge/GCC-Compiler-red" alt="GCC">
</p>

<ul>
  <li><b>Programming Language:</b> C</li>
  <li><b>Libraries:</b> stdio.h, string.h</li>
  <li><b>Concepts:</b> Structures, Arrays, Loops, Conditional Statements, Switch Case, and Arithmetic Operations.</li>
</ul>

<h2>▶️ How to Run</h2>

<h3>1. Clone the Repository</h3>

<pre><code>git clone &lt;repository-url&gt;</code></pre>

<h3>2. Navigate to the Project Folder</h3>

<pre><code>cd Smart-Health-Nutrition-Analyzer</code></pre>

<h3>3. Compile the Program</h3>

<p>Using GCC:</p>

<pre><code>gcc main.c -o health_analyzer</code></pre>

<h3>4. Run the Program</h3>

<p><b>Windows:</b></p>

<pre><code>health_analyzer.exe</code></pre>

<p><b>Linux / macOS:</b></p>

<pre><code>./health_analyzer</code></pre>

<h2>📋 Application Menu</h2>

<pre>
===== Smart Health & Nutrition Analyzer =====
1. Add Food Intake
2. View Total Nutrition
3. Diet & Meal Analysis
4. Diet Score & Deficiency Check
5. Compare Foods
6. Top Nutrient Finder
7. BMI Calculator
8. Water Intake Tracker
9. Exit
</pre>

<h2>📚 Concepts Demonstrated</h2>

<ul>
  <li>Structures for organizing food and nutrition information.</li>
  <li>Arrays for storing predefined food records.</li>
  <li>Loops for continuous menu-driven execution.</li>
  <li>Switch-case statements for handling user choices.</li>
  <li>Conditional statements for diet analysis and BMI classification.</li>
  <li>Arithmetic operations for calculating nutritional totals and BMI.</li>
  <li>Formatted input and output using <code>scanf()</code> and <code>printf()</code>.</li>
</ul>

<h2>⚠️ Limitations</h2>

<ul>
  <li>Only five predefined food items are available.</li>
  <li>Nutrition values are sample values and may vary depending on serving size and preparation.</li>
  <li>Diet scores and recommendations use fixed thresholds and are not medical assessments.</li>
  <li>Food intake is maintained only during the current program execution.</li>
  <li>The application does not store user history or maintain a persistent database.</li>
</ul>

<h2>🚀 Future Enhancements</h2>

<ul>
  <li>Add more food items and allow users to enter custom foods.</li>
  <li>Implement input validation for food choices, quantities, height, and weight.</li>
  <li>Add daily meal categorization and food history.</li>
  <li>Introduce file handling to save and retrieve nutrition records.</li>
  <li>Provide personalized nutritional targets based on user details.</li>
  <li>Improve diet analysis with more comprehensive nutritional guidelines.</li>
</ul>

---

<h2 align="center">👨‍💻 Author</h2>

<p align="center">
  <b>Sathvik Talabathula</b><br>
  B.Tech – Computer Science and Engineering (AI & ML)<br>
  CMR University
</p>

<p align="center">
  <a href="https://github.com/sathviktrd76">
    <img src="https://img.shields.io/badge/GitHub-sathviktrd76-black?style=for-the-badge&logo=github" alt="GitHub">
  </a>
</p>

<p align="center">
  <i>Built with C to explore fundamental programming concepts through a practical health and nutrition application.</i>
</p>

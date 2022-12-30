# Syntax Comparison Project Contributing Docs

This document contains guides to contributing to this project as well as maintaining the project.

With this in mind, we would like to thank every contributors in investing their time contributing to this project. 

> **Note**
> <br>To get to a specific section on this docs, click the **Table Of Contents** icon on the top left corner of this document.
>
> ![toc_icon](https://media.discordapp.net/attachments/988351630984495114/988352452141142036/Picture1.png?width=1440&height=247)

## Our Current Contributors

|  | Contributors | Role In The Project |
| --- | :---: | --- |
| 1. | [Lim JY](https://github.com/LimJY03) | Project creator, General content manager |
| 2. | [Cheah Zixu](https://github.com/genesis331) | Maintenance Administrator |
| 3. | [Weng Hong :D](https://github.com/AsynchronousNotAvailable) | `Java`, `Javascript` and `Python` content manager |
| 4. | [JC Chuan](https://github.com/PoisonDarterz) | `C`, `C++` and `C#` content manager |

---

# New Contributors Guide

To get the overview of this project, take a look at the [README.md](https://github.com/LimJY03/SyntaxComparison/blob/main/README.md) file. For more info on how to contribute in GitHub, here are some resources that may help you:

* [Contributing to Projects](https://docs.github.com/en/get-started/quickstart/contributing-to-projects)
* [GitHub Flow to Collaborate](https://docs.github.com/en/get-started/quickstart/github-flow)

If you want to contribute, be sure to read the [Design System](https://github.com/LimJY03/SyntaxComparison/blob/main/CONTRIBUTIONS.md#design-system) in our project especially for markdown formatting and structuring. If you are new to markdown syntax, here are some resources that may help you:

* [Markdown Basic Syntax](https://www.markdownguide.org/basic-syntax/)
* [Markdown Extended Syntax](https://www.markdownguide.org/extended-syntax/)
* [Writing on GitHub](https://docs.github.com/en/get-started/writing-on-github)

More enquiries can be made at [here](mailto:limjunyi03@gmail.com).

## Project Folder Structure

Most folders in our project are specific subtopic in the programming basics. Their structures are mostly like this:

* Subtopic Folder
    * `README.md` (Contains the theory, syntax comparisons and some additional notes)
    * Sample Codes Folder 
        * `xxx.c` (Contains sample code of the subtopic for `C`)
        * `xxx.c#` (Contains sample code of the subtopic for `C#`)
        * `xxx.cpp` (Contains sample code of the subtopic for `C++`)
        * `xxx.java` (Contains sample code of the subtopic for `Java`)
        * `xxx.js` (Contains sample code of the subtopic for `JavaScript`)
        * `xxx.py` (Contains sample code of the subtopic for `Python`)

## Design System

To maintain consistencies at both design and structure of our project, here is the guide to our design system in this project.

<!-- JY will write this section but if you have anything to write please leave it here as well for reviewing -->

### Markdown Syntax

All components should follow the markdown syntax and avoid using `HTML` syntax unless needed. 

> **Note**
> <br>The `HTML` tags mentioned below are for reference purposes only.

### Headings

In GitHub Markdown Renderer, all headings are automatically **bolded**, so there is no need to explicitly bold the headings with asterisks (`**`).

* Level 1 Header, `#` (`<h1>` in `HTML`) is used for Topic Title.
* Level 2 Header, `##` (`<h2>` in `HTML`) is used for Language Names.
* Level 3 Header, `###` (`<h3>` in `HTML`) is used for Subtopic Title and [Useful Links section](#useful-links-section).

### Bullets and Numberings

GitHub Markdown supports multiple characters that renders the same bullets or numbers, we will standardize them as follows:

* Use `*` for bullets.
* Instead of using all `1` to represent `1`, `2`, ... use their digit instead. (`1.` for 1, `2.` for 2, etc.)

### Useful Links Section

The heading of this section should be `### Useful Links:` followed by a reference link named **Learn More:** (from w3schools.com if possible) and a code example link named **Code Example:**, both in bullets.

This whole section will also be in a "quote", meaning that they have a quote bar at the left. Example of this section is as below:

> ### Useful Links:
> 
> * Learn More: [w3schools.com]()
> * Code Example: [CONTRIBUTIONS.md]()

### Syntax Highlighting

In GitHub Markdown Renderer, we can use triple backticks (<code>```</code>) followed by the programming language abbreviation to color it.

Read more on syntax highlighting [here](https://docs.github.com/en/get-started/writing-on-github/working-with-advanced-formatting/creating-and-highlighting-code-blocks#syntax-highlighting).

---

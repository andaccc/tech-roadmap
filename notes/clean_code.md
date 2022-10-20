# Clean code

## Naming
- Meaningful
- Intention-revealing
	- why it exists
	- what it does
	- how it used
- Avoid disinformation
- Meaningful distinctions
- Pronounceable
- Searchable
- Avoid encoding
	- Hungarian notation (bSwitchState)
	- Member prefixes (m_age)
	- Interfaces and implementations (ICar)
- Avoid mental mapping
- Class name 
	- noun not verb
- Method name
	- verb (get/set/is)
- Don't be cute
- One word per concept 
- No joke
- Technical terms
- Add meaningful context(addrState)

---
## Functions
- Small
- Blocks and indenting
- Do one thing
- One level of abstraction per function
- Top to bottom
- Descriptive names
- Function arg 
	- 0~3
	- no flag arg
- No side effects
- Avoid output arg
- Either do something or anwser something, not both
- Throw exception
- Don't reapeat itself
- Best one try and one return

---
## Comments
- Best code doesn't need comment
- Basic information
- Intent behind a decision
- Argument/ return value
- Potential consequences
- TODO comments

---
## Formatting
- Consistent and smooth styles
- Vertical formatting
	- variable declare as close to their usage
	- instance variable declare at top of class

- Horizontal Formatting
    - Identation

---
## Data Structures/ Objects
- Data abstraction, hiding implementation
- Data Transfer Object

---
## Error Handling
- Exceptions rather than return error codes
- Try Catch Finally
- Provide exceptions context
- exception class
- don't return null
- don't pass null

---
## Boundaries
- Third-party libs

---
## Unit Tests
- TDD
  - no production code before failing unit test
  - no more of a unit test than is sufficient to fail and not compiling 
  - no more production code thab is dufficent to pass curenntly failing test
- one assert per test

---
## Classes
- Encapsulation
- Small
- Isolating from Change

---
## System
- Separate start up process
- Scaling up
  - no "right the first time"
  - only today's stories
  - keep refactoring

---
## Design
- Postpone decision until last possible moment
- Run all tests
- No duplication
- Express intent
- Minimal classes/ methods


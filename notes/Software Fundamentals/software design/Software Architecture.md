# Software Architecture 

## Architectural Principles
### Component Design 

### Stable Abstraction Principle
- The more stable a component is, the more abstract it should be
- avoid component becoming too specific

### Stable Dependency Principle
- Components dependencies should be in the direction of stability
- Stable: High-level policy -> aren't expected to change that often
  - Schema
  - domain-layer classes
- Volatile: Low-level details -> require frequent changes
  - front end

## Policy vs Detail 
### Policy
- Abstractions
- Interfaces
- Business Logic
- Declarative

### Detail
- Concretions
- Implementations
- Infrastructure
- Imperative

### Boundaries 
- subdomains
---
## Architectural Styles
### Component-based / Microservices
- independent components
- horizontal separation

### Monolithic
- Single platform/ program
- Pros:
  - Simple to deploy
- Cons:
  - Language/ Framework lock
  - Difficult to digest when evolved large
  - deploy as single unit

### Layered
- separate vertically
- Infra Layer
  - Controllers
  - Routes
  - Caches
  - Databases
- Adapter Layer
  - APIs
- Application Layer
  - Application Features
- Domain Layer
  - Core Domain Logic
  - Entities
  - Value Objects
  - Domain Events

### Messaging
- Event-Driven
  - States
- Publish-Subscribe

### Distributed
components deployed separately and operate by communicatong over a network protocol, delegating responsibility to other components
- Client-Server
- Peer-to-Peer
---
## Architectural  Patterns
### Domain-Driven Design -> Reflect real-life model
- Domain Modeling 
  - Entities -> Identity 
  	- attributes likely change over time
  	- something needs to be tracked over time
  - Value Object -> Convey meaning and functionality
    - immutable
    - cpmplex attribute type
  - Services -> Operation
  - Repositories -> interface to retrieve and persist aggregates


### Model-View Controller
- UI-based app

### Event Sourcing
- storing data as events in an append-only log

## Ref:
https://www.freecodecamp.org/news/software-design/

https://khalilstemmler.com/

https://medium.com/inato/
an-introduction-to-domain-driven-design-386754392465

https://little-hands.hatenablog.com/entry/2018/12/09/entity-value-object
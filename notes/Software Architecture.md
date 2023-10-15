# Software Architecture

## Layered
### Presentation Layer 
- UI
### Business Layer
- Logic 
### Persistence Layer
- DAO
### Database Layer
- Data Storage  

Pros 
- good isolation (unit testing)
- easy to implement

Cons
- Tight Coupling of components
- may need to deploy whole system for any changes
- costly scalability

---
## Event-Driven

### Mediator
### Event
- Initial (raw event)
- Processing (middle)
### Event Queue
### Event Channel
### Event Processors

### Broker
- Broker event Channel

Pros 
- Decouple/ isolated processor
- easy deploy/ scale

Cons
- event generation on testing
- async, error handling, processor response

--- 
## Microkernel
### Core
### Plug-on Components

Pros 
- isolated modules
- runtime modules plugin

Cons
- limited expansion scope
- complicated connectivity

---
## Microservices
### Client Requests
### UI / API Layer
### Service Components

Level of granularity

Pros 
- isolated modules
- separate modules deployment
- reduced coordination when developing different modules

Cons
- distributed nature, low performance

---
## Space-Based
### Cloud architecture
### Virtualized Middleware
- Messaging 
- Data
- Processing
- Deployment
### Processing Unit


## Ref:
Software Architecture Patterns

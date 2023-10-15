# Cloud 

Pay for cloud execution
Focus on business logic

Pros
- no need maintain infrastructure
- pay for execution

Cons
- cold start
- difficult monitor/debugging

## Stack
- Faas Function as a service 
- Serverless database/storage
- Event Streaming/ Messaging
- API gateway

## MicroServices
- break down application as services

## AWS 
### 1. Operational Excellence
- continuously improve for operational process

- Automation
- Infrastructure as Code
  - machine-readable configuration files
- Observability
  - process of measuring internal state of the system
    - Collection
    - Analytics
    - Action

### 2. Security
- Identity and Access Management
  - Principal (who permitted)
  - Action (what)
  - Resource (which, properties priviledge)

- Network Security
  - Virtual Private Cloud
    - Subnets
    - Route tables
    - Internet gateway

- Resource Level Security
  - secuirty group
  - virutal firewalls

- Data Encryption
  - Enctyption in Transit (between system)
  - Enctyption at Rest (within system)

### 3. Reliability
- withstand disruption
- Fault Isolation
  - Resouce and Request
    - contain failures inside cells
  - Availability Zone
    - independent facility
    - avoid environmental hazards
  - Region
    - redundant copes across different data centers

### 4. Performance Efficiency
- Efficiency and Scalability 
- Selection
  - Types
    - Compute
    - Storage
    - Database
    - Network
  - Degree of Management
  - Configuration
- Scailing
  - Vertical Scaling
    - bigger instance
  - Horizontal Scaling
    - number of instance

### 5. Cost Optimization
- pay as you go
- Pay For Use
  - Right Sizing
  - Serverless
    - only charged when executing
  - Reservations
    - discount commitment
  - Spot Instances
    - unused capacity 

- Lifecycle
  - Review
  - Track
  - Optimize


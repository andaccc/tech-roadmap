# System Design 
## Aspect
- Client Ease of Use
- Ease for internal implement/ maintenance
- Flexibility for futuren demands
- Scalability and Efficency
- Scope Problem

## Assumptions
  - user load

## Draw Component
  - frontend 
  - db 
  - other modules...

## Key Issues
  - bottleneck
  - challenges
  - limitation

## Scaling
  - Horizontal, larger node
  - Vertical, number of nodes

## Load Balancer

## Database
- Database Denormalization / NoSQL
  - avoid join

- Database Partitioning (Sharding)
  - Vertical Partitional
    - By feature (profilesm messages...)
  - Key-Based
  - Directory-Based
    - lookup table

## Caching
- query
- resources for web page

## Asynchronous Processing & Queues
- separate operation
- instead waiting 

## Networking Metrics
- Bandwidth
- Throughput, actual amount of data that is transfered
- Latency

## Considerations
- Failures
- Availability and Reliability
- Read Heavy vs Write Heavy
- Security


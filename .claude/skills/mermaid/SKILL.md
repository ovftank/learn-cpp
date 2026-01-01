---
name: mermaid
description: Guide for creating mermaid diagrams for C++ learning and documentation. Creates visual diagrams to help learners understand concepts.
allowed_tools:
  - Bash(md *)
  - Write
---

# Mermaid Diagram Skill

This skill helps you create Mermaid diagrams for C++ learning. Diagrams visualize concepts, memory layout, execution flow, and code structure to make learning easier.

## Core Workflow

Follow these steps for every diagram creation:

### 1. Understand the Request

- Identify the diagram type needed (flowchart, sequence, class, etc.)
- Extract key elements: entities, relationships, flow, hierarchy
- Determine if creating for: concept explanation, code analysis, or exercise

### 2. Generate Mermaid Code

- Create syntactically correct Mermaid diagram code
- Use appropriate diagram type for the learning goal
- Apply consistent naming and styling
- Keep diagrams simple and focused

## Supported Diagram Types

Load examples from `examples/` directory as needed:

**Basic Diagrams:**

- Flowchart (`examples/flowchart.md`)
- Sequence Diagram (`examples/sequence.md`)
- Class Diagram (`examples/class.md`)
- State Diagram (`examples/state.md`)
- Entity Relationship (`examples/er.md`)

**Planning & Management:**

- Gantt Chart (`examples/gantt.md`)
- User Journey (`examples/journey.md`)
- Timeline (`examples/timeline.md`)
- Kanban (`examples/kanban.md`)

**Data Visualization:**

- Pie Chart (`examples/pie.md`)
- XY Chart (`examples/xy-chart.md`)
- Quadrant Chart (`examples/quadrant.md`)
- Sankey (`examples/sankey.md`)
- Radar (`examples/radar.md`)
- Treemap (`examples/treemap.md`)

**Technical Diagrams:**

- Git Graph (`examples/git.md`)
- C4 Diagram (`examples/c4.md`)
- Requirement Diagram (`examples/requirement.md`)
- Architecture (`examples/architecture.md`)
- Block Diagram (`examples/block.md`)
- Packet (`examples/packet.md`)

**Organizational:**

- Mindmap (`examples/mindmap.md`)
- ZenUML (`examples/zenuml.md`)

## Diagram Types for C++ Learning

| Concept | Best Diagram Type | Purpose |
|---------|-------------------|---------|
| **Memory layout** | `graph` or ASCII | Visualize stack vs heap, object storage |
| **Ownership/Smart pointers** | `flowchart` | Show ownership transfer, lifecycle |
| **Class relationships** | `classDiagram` | Inheritance, composition, aggregation |
| **Function execution** | `sequenceDiagram` | Call flow, object interactions |
| **State machines** | `stateDiagram` | Object states, transitions |
| **Template instantiation** | `flowchart` | Compile-time process |
| **Move semantics** | `flowchart` | lvalue/rvalue conversion, move vs copy |
| **Exception handling** | `flowchart` | Try-catch flow, stack unwinding |
| **Algorithm steps** | `flowchart` | Step-by-step logic |
| **Learning roadmap** | `mindmap` | Topic dependencies, order |

## Code Analysis → Diagram

When analyzing C++ code to create diagrams:

**Class Diagrams:**

- Extract classes, methods, properties, inheritance, interfaces
- Show relationships: inheritance (`--|>`), composition (`*--`), aggregation (`o--`)

**Sequence Diagrams:**

- Track function calls, async operations, API interactions
- Show actors, lifelines, activation boxes

**Flowcharts:**

- Map control flow, conditionals, loops
- Show function entry/exit points

**State Diagrams:**

- Identify states from enums, state machines, status fields
- Map transitions and events

## Learning-Focused Guidelines

**For Concept Explanations:**

- Start with simple diagram, add complexity gradually
- Use color coding to highlight important elements
- Add labels explaining each step/component
- Keep to one main idea per diagram

**For Memory Visualization:**

- Use ASCII for simple layouts (faster to read)
- Use Mermaid `graph` for complex relationships
- Clearly label: Stack, Heap, Code segment, Data segment
- Show pointer relationships with arrows

**For Execution Flow:**

- Use `sequenceDiagram` for multi-object interactions
- Use `flowchart` for single-function logic
- Number steps to show order
- Highlight decision points

**For Exercises:**

- Create incomplete diagrams for learners to fill
- Use diagrams as visual hints in exercise prompts
- Show "before" and "after" states for transformation exercises

## Best Practices

**Styling:**

- Use meaningful node IDs
- Add clear, concise labels
- Use classDefs for visual consistency
- Apply color to differentiate concepts

**Readability:**

- Keep diagrams focused (split large diagrams)
- Use top-to-bottom (TD) or left-to-right (LR) consistently
- Add comments in code for complex sections
- Limit to ~10-15 nodes per diagram

**Learning Effectiveness:**

- One concept per diagram
- Progressive complexity (simple → complex)
- Always explain the diagram in text
- Reference diagram in explanations

## Output Format

Present to user:

```
<Show the mermaid code in a code block>

<Explain what the diagram shows>
```

Only save to file when user explicitly requests it.

## Notes

- Use diagrams in explanations when visual helps understanding
- Mermaid diagrams render natively in GitHub, Obsidian, VS Code
- Only save to .md file when user explicitly requests

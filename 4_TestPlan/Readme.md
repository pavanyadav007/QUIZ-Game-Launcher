



# TEST PLAN:
##  High level Test Plan

| **Test ID** | **Description**                                 |**INPUT**  | **Exp OUT** | **Actual Out** |**status** |**Type Of Test**  |
|-------------|-------------------------------------------------|--|-------------|----------------|------------|-------|
| H_01        | Display correct questions based on topic selected|"L"or"S"or"G"or"T"  | questions displayed  | Question displayed  | pass|Requirement based    |
| H_02        | Working of help option  | "H" | Instructions displayed |  Instructions displayed   |pass | Requirement based    |
| H_03        | Working of game introduction | "S" | Instructions displayed| Instructions displayed     |pass  | Scenario based    |
| H_04        | Correct quiz scoring | "A"or"B"or"C"or"D"| correct or incorrect(life-1) message    |  correct or incorrect message |pass    | Requirement based |




## Low level Test Plan


| **Low Level Test ID** |**High Level Test ID** | **Description**                                   | **Exp OUT** | **Actual Out** |**status**| **Type Of Test**  |
|-------------|--|---------------------------------------------------|-------------|----------------|----------------|---|
| L_01        |H_01 | File IO - Try to read a wrong file                | NO_FILE     | NO_FILE    |pass    | Scenario based    |
| L_02        |H_01,H_04 |File IO - Try to pass an invalid pointer          | NULL_PTR    | NULL_PTR    |pass   | Scenario based    |
| L_03        |INDEPENDENT |File IO - Reading correct file with valid pointer | SUCCESS     | SUCCESS    |pass    | Scenario based    |
| L_04        |INDEPENDENT |Entering wrong question pointer in the game       | NULL_PTR    | SUCCESS    |pass    | Requirement based |

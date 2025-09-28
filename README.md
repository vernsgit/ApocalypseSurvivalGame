# Apocalypse Survival (C++)

A simple console game developed as a **team project** in C++.  
Your goal is to survive the apocalypse and complete **four quests** from NPCs.

---

## 🎮 Gameplay
- Your character is **`x`** on the map; NPCs are **`N`**.
- Collect items to boost **health** or **strength** (the rarest is the **magic apple**).
- Enemies and their count scale with the chosen difficulty.

---

## 🕹️ How to Play
1. **Start the game:** type `z`
2. **Choose difficulty:** `1`, `2`, or `3` (`1` = easiest)
3. **Move:** `w` = up, `a` = left, `s` = down, `d` = right
4. **Quit mid-game:** type `0`
5. **Restart after win/lose:** type `y`

---

## 🏆 Win / Lose Conditions
- **Win:** complete all 4 NPC quests (score = 4)
- **Lose:** health reaches 0
- Other inputs are ignored.

---

## ⚙️ Build & Run
CLion automatically uses the included `CMakeLists.txt`.  
Just click **Run ▶️** (e.g. from `main.cpp`), and the game will start.

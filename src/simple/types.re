type set = {
  weight: float,
  reps: int
};

type exercise = {
  name: string,
  sets: list set
};

type workout = {
  name: string,
  exercises: array exercise
};

type profile = {
  name: string,
  workouts: array workout
};
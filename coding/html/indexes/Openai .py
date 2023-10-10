import os
import openai

openai.api_key = os.getenv("OPENAI_API_KEY")

response = openai.Completion.create(
  model="text-davinci-003",
  prompt="A certain examination carries a total of 10 questions and the student is required to answer 7 questions only. The paper is divided into 2 sections, into section A comprising the first 5 questions and section B comprising the last 5 questions. Determine the number of ways the student can answer the examination. If atleast 3 questions are selected from section A.\nShow working use simple math concept \n\nLet x = number of questions selected from section A\nLet y = number of questions selected from section B\nTherefore, x + y = 7 \n\nSince it is specified that at least 3 questions are selected from section A, x must be greater than or equal to 3. \n\nTherefore, x can be 3, 4, 5. \n\nFor x = 3, y = 4\nFor x = 4, y = 3\nFor x = 5, y = 2\n\nTherefore, the number of ways the student can answer the examination is 3.",
  temperature=0.7,
  max_tokens=256,
  top_p=1,
  frequency_penalty=0,
  presence_penalty=0
)
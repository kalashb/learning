from datasets import load_dataset
dataset = load_dataset("imdb")

from transformers import BertForSequenceClassification, BertTokenizer
model = BertForSequenceClassification.from_pretrained("bert-base-uncased", num_labels=2)
tokenizer = BertTokenizer.from_pretrained("bert-base-uncased")

def preprocess(batch):
    return tokenizer(batch["text"], truncation=True, padding=True)

tokenized_dataset = dataset.map(preprocess, batched=True)
